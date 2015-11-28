
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView;

@interface IGBannerView : UIButton {

	UILabel* _textLabel;
	UILabel* _disclosureLabel;
	UIImageView* _disclosureIndicator;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _disclosureLabelInsets;

}

@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                       //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;               //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                      //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets disclosureLabelInsets;              //@synthesize disclosureLabelInsets=_disclosureLabelInsets - In the implementation block
-(UILabel *)disclosureLabel;
-(UIImageView *)disclosureIndicator;
-(UIEdgeInsets)disclosureLabelInsets;
-(void)setDisclosureLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setDisclosureLabel:(UILabel *)arg1 ;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

