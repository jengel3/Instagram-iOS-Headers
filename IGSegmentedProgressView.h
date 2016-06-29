
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSMutableArray, NSArray;

@interface IGSegmentedProgressView : UIView {

	UIColor* _activeSegmentColor;
	UIColor* _inactiveSegmentColor;
	unsigned _activeSegmentIndex;
	NSMutableArray* _segments;

}

@property (nonatomic,retain) NSMutableArray * segments;                   //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy) NSArray * progressNumbers; 
@property (nonatomic,retain) UIColor * activeSegmentColor;                //@synthesize activeSegmentColor=_activeSegmentColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveSegmentColor;              //@synthesize inactiveSegmentColor=_inactiveSegmentColor - In the implementation block
@property (assign,nonatomic) unsigned activeSegmentIndex;                 //@synthesize activeSegmentIndex=_activeSegmentIndex - In the implementation block
@property (nonatomic,readonly) float totalProgress; 
-(void)resetCurrentSegmentsWithProgressNumbers:(id)arg1 ;
-(void)updateProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)setProgressNumbers:(id)arg1 animated:(char)arg2 ;
-(NSArray *)progressNumbers;
-(UIColor *)activeSegmentColor;
-(UIColor *)inactiveSegmentColor;
-(unsigned)activeSegmentIndex;
-(void)setActiveSegmentColor:(UIColor *)arg1 ;
-(void)setInactiveSegmentColor:(UIColor *)arg1 ;
-(void)setProgressNumbers:(NSArray *)arg1 ;
-(void)setActiveSegmentIndex:(unsigned)arg1 ;
-(void)updateProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)totalProgress;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
@end

