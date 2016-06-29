
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGRankedTitleView : UIView {

	UILabel* _statusLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * statusLabel;              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
+(float)rankedTitleViewSpacing;
-(void)setStatusText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

