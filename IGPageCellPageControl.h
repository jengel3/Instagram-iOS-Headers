
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIPageControl.h>

@interface IGPageCellPageControl : UIPageControl {

	int _visualStyle;

}

@property (assign,nonatomic) int visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
-(id)initWithVisualStyle:(int)arg1 ;
-(void)applyVisualStyle:(int)arg1 ;
-(void)layoutSubviews;
-(int)visualStyle;
-(void)setVisualStyle:(int)arg1 ;
-(CGSize)sizeForNumberOfPages:(int)arg1 ;
@end

