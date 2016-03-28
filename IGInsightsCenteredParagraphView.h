
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, NSURL;

@interface IGInsightsCenteredParagraphView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _urlbutton;
	NSURL* _url;
	CGRect _frame;

}

@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * urlbutton;                 //@synthesize urlbutton=_urlbutton - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGRect frame;                         //@synthesize frame=_frame - In the implementation block
-(id)initWithFrame:(CGRect)arg1 paragraphUnit:(id)arg2 ;
-(void)onWebsiteExternalLinkTapped:(id)arg1 ;
-(UIButton *)urlbutton;
-(void)layoutSubviews;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSURL *)url;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
@end

