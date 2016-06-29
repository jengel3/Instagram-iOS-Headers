
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGDirectResponseOverlayViewV2XOutContentView : UIView {

	UILabel* _topTextLabel;
	UILabel* _bottomTextLabel;
	UIImageView* _iconImageView;

}

@property (nonatomic,readonly) UILabel * topTextLabel;                   //@synthesize topTextLabel=_topTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bottomTextLabel;                //@synthesize bottomTextLabel=_bottomTextLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(void)setupWithDirectResponseInfo:(id)arg1 ;
-(UILabel *)bottomTextLabel;
-(UILabel *)topTextLabel;
-(id)initWithDirectResponseInfo:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

