
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView;

@interface IGBannerView : UIButton {

	UILabel* _textLabel;
	UILabel* _disclosureLabel;
	UIImageView* _disclosureIndicator;
	int _bannerIndicatorType;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _disclosureLabelInsets;

}

@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                       //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;               //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                      //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets disclosureLabelInsets;              //@synthesize disclosureLabelInsets=_disclosureLabelInsets - In the implementation block
@property (assign,nonatomic) int bannerIndicatorType;                         //@synthesize bannerIndicatorType=_bannerIndicatorType - In the implementation block
-(UILabel *)disclosureLabel;
-(void)setBannerIndicatorType:(int)arg1 ;
-(UIImageView *)disclosureIndicator;
-(UIEdgeInsets)disclosureLabelInsets;
-(id)initWithFrame:(CGRect)arg1 bannerIndicatorType:(int)arg2 ;
-(void)setDisclosureLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setDisclosureLabel:(UILabel *)arg1 ;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(int)bannerIndicatorType;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

