
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface IGCollectionViewSectionSeparator : UICollectionReusableView {

	UIView* _separator;

}

@property (nonatomic,readonly) UIView * separator;              //@synthesize separator=_separator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setDesiredSize:(CGSize)arg1 ;
-(UIView *)separator;
@end

