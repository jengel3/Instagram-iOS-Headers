
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDrawCanvasDelegate.h>

@class IGDrawCanvas;

@interface IGDrawCanvasView : UIView <IGDrawCanvasDelegate> {

	IGDrawCanvas* _canvas;

}

@property (nonatomic,readonly) IGDrawCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)didDrawOnCanvas:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(IGDrawCanvas *)canvas;
@end

