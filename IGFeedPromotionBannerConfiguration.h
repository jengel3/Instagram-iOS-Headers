

@class NSString, NSURL, UIImage, IGAppInstallationsHelper, NSMutableAttributedString, NSAttributedString;

@interface IGFeedPromotionBannerConfiguration : NSObject {

	char _showDismissButton;
	char _promotionDismissed;
	NSString* _title;
	NSString* _subtitle;
	NSString* _buttonText;
	int _feedPromotionBannerType;
	NSURL* _iconURL;
	UIImage* _icon;
	/*^block*/id _cellTapActionBlock;
	/*^block*/id _cellImpressionActionBlock;
	/*^block*/id _cellDismssActionBlock;
	/*^block*/id _cellPromotionButtonTappedActionBlock;
	IGAppInstallationsHelper* _appInstallationsHelper;
	NSMutableAttributedString* _mutableCenterText;
	NSString* _appId;
	NSString* _uuid;

}

@property (nonatomic,retain) IGAppInstallationsHelper * appInstallationsHelper;              //@synthesize appInstallationsHelper=_appInstallationsHelper - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * mutableCenterText;                  //@synthesize mutableCenterText=_mutableCenterText - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                                          //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                                //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * appId;                                               //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) char promotionDismissed;                                        //@synthesize promotionDismissed=_promotionDismissed - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSAttributedString * centerText; 
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) int feedPromotionBannerType;                                    //@synthesize feedPromotionBannerType=_feedPromotionBannerType - In the implementation block
@property (assign,nonatomic) char showDismissButton;                                         //@synthesize showDismissButton=_showDismissButton - In the implementation block
@property (nonatomic,copy) id cellTapActionBlock;                                            //@synthesize cellTapActionBlock=_cellTapActionBlock - In the implementation block
@property (nonatomic,copy) id cellImpressionActionBlock;                                     //@synthesize cellImpressionActionBlock=_cellImpressionActionBlock - In the implementation block
@property (nonatomic,copy) id cellDismssActionBlock;                                         //@synthesize cellDismssActionBlock=_cellDismssActionBlock - In the implementation block
@property (nonatomic,copy) id cellPromotionButtonTappedActionBlock;                          //@synthesize cellPromotionButtonTappedActionBlock=_cellPromotionButtonTappedActionBlock - In the implementation block
+(void)logForAction:(id)arg1 reason:(id)arg2 type:(id)arg3 uuid:(id)arg4 ;
+(id)stringForPromotionType:(int)arg1 ;
+(id)iconImageForPromotionType:(int)arg1 ;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)setFeedPromotionBannerType:(int)arg1 ;
-(id)cellPromotionButtonTappedActionBlock;
-(id)cellImpressionActionBlock;
-(int)feedPromotionBannerType;
-(id)cellDismssActionBlock;
-(void)buildCenterTextWithTextRuns:(id)arg1 ;
-(void)setMutableCenterText:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)mutableCenterText;
-(void)logBannerImpression;
-(void)setCellImpressionActionBlock:(id)arg1 ;
-(void)logBannerDismissal;
-(void)setCellDismssActionBlock:(id)arg1 ;
-(void)setCellPromotionButtonTappedActionBlock:(id)arg1 ;
-(void)logBannerButtonTapped;
-(void)setCellTapActionBlock:(id)arg1 ;
-(void)setPromotionDismissed:(char)arg1 ;
-(void)setupActionBlockForFollowDestination;
-(void)setShowDismissButton:(char)arg1 ;
-(void)setupActionBlocksForPromotionWithType:(int)arg1 ;
-(id)nameOfFeedPromotionBannerType;
-(id)initWithButtonText:(id)arg1 centerText:(id)arg2 icon:(id)arg3 ;
-(void)setupActionBlockForHyperlapse;
-(void)setupActionBlockForBoomerang;
-(void)setupActionBlockForLayout;
-(char)showDismissButton;
-(char)promotionDismissed;
-(id)cellTapActionBlock;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)reuseIdentifier;
-(NSString *)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(NSString *)uuid;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(NSAttributedString *)centerText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(NSURL *)iconURL;
@end

