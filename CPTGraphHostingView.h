
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CPTGraph, UIPinchGestureRecognizer;

@interface CPTGraphHostingView : UIView {

	char collapsesLayers;
	char allowPinchScaling;
	CPTGraph* hostedGraph;
	UIPinchGestureRecognizer* pinchGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIPinchGestureRecognizer * pinchGestureRecognizer; 
@property (nonatomic,retain) CPTGraph * hostedGraph; 
@property (assign,nonatomic) char collapsesLayers; 
@property (assign,nonatomic) char allowPinchScaling; 
+(Class)layerClass;
-(char)collapsesLayers;
-(void)setHostedGraph:(CPTGraph *)arg1 ;
-(void)setCollapsesLayers:(char)arg1 ;
-(void)setAllowPinchScaling:(char)arg1 ;
-(CPTGraph *)hostedGraph;
-(char)allowPinchScaling;
-(void)handlePinchGesture:(id)arg1 ;
-(void)graphNeedsRedraw:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)commonInit;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
@end

