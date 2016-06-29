
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel;

@interface IGViewCountFooterView : UICollectionReusableView {

	UIImageView* _eyeIcon;
	UILabel* _viewCountLabel;

}

@property (nonatomic,readonly) UIImageView * eyeIcon;                 //@synthesize eyeIcon=_eyeIcon - In the implementation block
@property (nonatomic,readonly) UILabel * viewCountLabel;              //@synthesize viewCountLabel=_viewCountLabel - In the implementation block
+(float)height;
-(UIImageView *)eyeIcon;
-(UILabel *)viewCountLabel;
-(void)setViewCount:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

