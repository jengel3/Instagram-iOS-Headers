
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGTopAccountWelcomeNUXViewDelegate;
@class IGFacebookBusinessButton, IGCoreTextView, UIImageView, UILabel, NSString;

@interface IGTopAccountWelcomeNUXView : UIView <IGCoreTextLinkHandler> {

	id<IGTopAccountWelcomeNUXViewDelegate> _delegate;
	IGFacebookBusinessButton* _acceptButton;
	IGCoreTextView* _disclaimerLabel;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets _viewContentInsets;

}

@property (nonatomic,readonly) IGFacebookBusinessButton * acceptButton;                           //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * disclaimerLabel;                                  //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGTopAccountWelcomeNUXViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets viewContentInsets;                                      //@synthesize viewContentInsets=_viewContentInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpTitle;
-(void)setUpSubtitle;
-(void)setUpViewHierarchy;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setUpAcceptButton;
-(void)setUpDisclaimerLabel;
-(void)didTapAcceptTermsAndConditionsButton:(id)arg1 ;
-(CGRect)acceptButtonRect;
-(IGCoreTextView *)disclaimerLabel;
-(CGRect)disclaimerLabelRect;
-(CGRect)imageViewRect;
-(CGRect)titleRectWithImageViewRect:(CGRect)arg1 ;
-(CGRect)subtitleRectWithTitleRect:(CGRect)arg1 ;
-(void)raiseView:(id)arg1 y:(float)arg2 ;
-(UIEdgeInsets)viewContentInsets;
-(void)setViewContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTopAccountWelcomeNUXViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGTopAccountWelcomeNUXViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(UIImageView *)imageView;
-(IGFacebookBusinessButton *)acceptButton;
@end

