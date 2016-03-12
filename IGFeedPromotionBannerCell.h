
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGFeedPromotionBannerDelegate;
@class IGFeedPromotionBannerConfiguration, NSURL, UIButton, NSString;

@interface IGFeedPromotionBannerCell : IGPlainTableViewCell <IGMediaRequestDelegate> {

	id<IGFeedPromotionBannerDelegate> _delegate;
	IGFeedPromotionBannerConfiguration* _configuration;
	NSURL* _iconURL;
	UIButton* _dismissButton;

}

@property (assign,nonatomic,__weak) id<IGFeedPromotionBannerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IGFeedPromotionBannerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                                          //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                 //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onDismissButtonTapped;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)configureCellWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedPromotionBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedPromotionBannerDelegate>)delegate;
-(float)currentHeight;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(IGFeedPromotionBannerConfiguration *)configuration;
-(UIButton *)dismissButton;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(NSURL *)iconURL;
@end

