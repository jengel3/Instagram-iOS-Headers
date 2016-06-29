
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSMutableArray;

@interface IGCameraGuideView : UIView {

	unsigned _subdivisionCount;
	UIView* _containerView;
	NSMutableArray* _xAxisGridLines;
	NSMutableArray* _yAxisGridLines;

}

@property (nonatomic,retain) UIView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * xAxisGridLines;              //@synthesize xAxisGridLines=_xAxisGridLines - In the implementation block
@property (nonatomic,retain) NSMutableArray * yAxisGridLines;              //@synthesize yAxisGridLines=_yAxisGridLines - In the implementation block
@property (assign,nonatomic) unsigned subdivisionCount;                    //@synthesize subdivisionCount=_subdivisionCount - In the implementation block
-(void)setUpGridSubviewGuides:(id)arg1 ;
-(void)setSubdivisionCount:(unsigned)arg1 animated:(char)arg2 ;
-(NSMutableArray *)xAxisGridLines;
-(NSMutableArray *)yAxisGridLines;
-(void)setSubdivisionCount:(unsigned)arg1 ;
-(unsigned)subdivisionCount;
-(void)setXAxisGridLines:(NSMutableArray *)arg1 ;
-(void)setYAxisGridLines:(NSMutableArray *)arg1 ;
-(void)show:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
@end

