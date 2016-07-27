
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGSponsoredPostInfo : NSObject <NSCoding> {

	char _showIcon;
	char _allowDirectShare;
	char _isHoldout;
	char _showAdChoicesIcon;
	NSString* _adTitle;
	NSString* _label;
	NSString* _trackingToken;
	int _hideFlowVersion;
	NSArray* _possibleHideAnswers;
	NSString* _aboutAdsServerParams;
	NSArray* _cookies;
	NSArray* _viewTags;

}

@property (nonatomic,retain) NSString * adTitle;                         //@synthesize adTitle=_adTitle - In the implementation block
@property (nonatomic,retain) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char showIcon;                              //@synthesize showIcon=_showIcon - In the implementation block
@property (assign,nonatomic) char allowDirectShare;                      //@synthesize allowDirectShare=_allowDirectShare - In the implementation block
@property (assign,nonatomic) char isHoldout;                             //@synthesize isHoldout=_isHoldout - In the implementation block
@property (assign,nonatomic) char showAdChoicesIcon;                     //@synthesize showAdChoicesIcon=_showAdChoicesIcon - In the implementation block
@property (nonatomic,copy) NSArray * viewTags;                           //@synthesize viewTags=_viewTags - In the implementation block
@property (nonatomic,copy) NSString * trackingToken;                     //@synthesize trackingToken=_trackingToken - In the implementation block
@property (nonatomic,copy) NSString * aboutAdsServerParams;              //@synthesize aboutAdsServerParams=_aboutAdsServerParams - In the implementation block
@property (nonatomic,copy) NSArray * cookies;                            //@synthesize cookies=_cookies - In the implementation block
@property (assign,nonatomic) int hideFlowVersion;                        //@synthesize hideFlowVersion=_hideFlowVersion - In the implementation block
@property (nonatomic,retain) NSArray * possibleHideAnswers;              //@synthesize possibleHideAnswers=_possibleHideAnswers - In the implementation block
+(id)sponsoredPostForAdPreview;
-(NSString *)adTitle;
-(char)isHoldout;
-(NSArray *)possibleHideAnswers;
-(void)updateTrackingTokenFromSponsoredPostInfo:(id)arg1 ;
-(NSString *)trackingToken;
-(char)showAdChoicesIcon;
-(NSString *)aboutAdsServerParams;
-(void)setAdTitle:(NSString *)arg1 ;
-(void)setAllowDirectShare:(char)arg1 ;
-(void)setIsHoldout:(char)arg1 ;
-(void)setShowAdChoicesIcon:(char)arg1 ;
-(void)setAboutAdsServerParams:(NSString *)arg1 ;
-(void)setHideFlowVersion:(int)arg1 ;
-(void)preparePossibleHideAnswers:(id)arg1 ;
-(void)preparePossibleHideAnswersV2:(id)arg1 ;
-(void)prepareCookies:(id)arg1 ;
-(void)setCookies:(NSArray *)arg1 ;
-(void)setPossibleHideAnswers:(NSArray *)arg1 ;
-(char)allowDirectShare;
-(int)hideFlowVersion;
-(NSArray *)viewTags;
-(void)setViewTags:(NSArray *)arg1 ;
-(void)setTrackingToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
-(NSArray *)cookies;
@end

