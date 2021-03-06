

@class NSString, NSURL, IGAdPaymentInfo, UIColor;

@interface IGAdViewModel : NSObject {

	unsigned _type;
	NSString* _mediaId;
	NSString* _organicMediaId;
	NSURL* _thumbnailURL;
	NSString* _callToAction;
	NSString* _facebookID;
	NSURL* _callToActionURL;
	NSString* _audienceName;
	NSString* _totalBudget;
	NSString* _totalDuration;
	NSString* _timeLeft;
	NSString* _numberOfClicks;
	NSString* _pendingStatus;
	NSString* _endDate;
	IGAdPaymentInfo* _paymentInfo;

}

@property (readonly) NSString * headerTitle; 
@property (readonly) NSString * headerSubtitle; 
@property (readonly) NSString * errorStatus; 
@property (readonly) NSString * deleteString; 
@property (readonly) NSString * adsManagerCellTitle; 
@property (readonly) NSString * adsManagerCellSubtitle; 
@property (readonly) UIColor * adsManagerCellColorForSubtitle; 
@property (readonly) NSString * loggingStatus; 
@property (nonatomic,readonly) unsigned type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaId;                     //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * organicMediaId;              //@synthesize organicMediaId=_organicMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbnailURL;                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToAction;                //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * facebookID;                  //@synthesize facebookID=_facebookID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * callToActionURL;                //@synthesize callToActionURL=_callToActionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * audienceName;                //@synthesize audienceName=_audienceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalBudget;                 //@synthesize totalBudget=_totalBudget - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalDuration;               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeLeft;                    //@synthesize timeLeft=_timeLeft - In the implementation block
@property (nonatomic,copy,readonly) NSString * numberOfClicks;              //@synthesize numberOfClicks=_numberOfClicks - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingStatus;               //@synthesize pendingStatus=_pendingStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) IGAdPaymentInfo * paymentInfo;               //@synthesize paymentInfo=_paymentInfo - In the implementation block
-(id)initActiveAdWithType:(unsigned)arg1 facebookID:(id)arg2 organicMediaId:(id)arg3 thumbnailURL:(id)arg4 mediaId:(id)arg5 callToAction:(id)arg6 callToActionURL:(id)arg7 audienceName:(id)arg8 totalBudget:(id)arg9 totalDuration:(id)arg10 timeLeft:(id)arg11 numberOfClicks:(id)arg12 pendingStatus:(id)arg13 endDate:(id)arg14 paymentsInfo:(id)arg15 ;
-(NSString *)mediaId;
-(NSString *)facebookID;
-(NSString *)organicMediaId;
-(NSString *)headerSubtitle;
-(NSString *)deleteString;
-(NSString *)adsManagerCellTitle;
-(NSString *)adsManagerCellSubtitle;
-(UIColor *)adsManagerCellColorForSubtitle;
-(NSString *)loggingStatus;
-(NSString *)callToAction;
-(NSURL *)callToActionURL;
-(NSString *)audienceName;
-(NSString *)timeLeft;
-(NSString *)numberOfClicks;
-(IGAdPaymentInfo *)paymentInfo;
-(NSString *)pendingStatus;
-(NSString *)endDate;
-(unsigned)type;
-(NSString *)headerTitle;
-(NSString *)totalBudget;
-(NSString *)errorStatus;
-(NSString *)totalDuration;
-(NSURL *)thumbnailURL;
@end

