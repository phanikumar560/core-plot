#import <Cocoa/Cocoa.h>

@class CPLayer;

@interface CPLayerHostingView : NSView {
@private
	CPLayer *hostedLayer, *layerBeingClickedOn;
}

@property (nonatomic, readwrite, retain) CPLayer *hostedLayer;

@end
