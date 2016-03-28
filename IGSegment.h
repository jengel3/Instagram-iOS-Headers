
#import <UIKit/UIView.h>

@interface IGSegment : UIView {

	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

