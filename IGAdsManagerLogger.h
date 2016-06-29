

@class NSString;

@interface IGAdsManagerLogger : NSObject {

	NSString* _waterfallID;
	NSString* _entryPoint;

}

@property (nonatomic,copy,readonly) NSString * waterfallID;              //@synthesize waterfallID=_waterfallID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;               //@synthesize entryPoint=_entryPoint - In the implementation block
+(id)loggerWithEntryPoint:(id)arg1 ;
-(void)didLeavePromotedPostWithAdViewModel:(id)arg1 ;
-(void)didLoadAdScreenWithAdViewModel:(id)arg1 ;
-(void)didTapViewPromotedPostWithAdViewModel:(id)arg1 ;
-(void)didDeleteAdWithAdViewModel:(id)arg1 ;
-(void)didFailDeleteAdWithAdViewModel:(id)arg1 error:(id)arg2 ;
-(void)didLoadPromotedPostWithAdViewModel:(id)arg1 ;
-(id)initWithEntryPoint:(id)arg1 ;
-(void)logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3 ;
-(NSString *)waterfallID;
-(void)didTapEntryPoint;
-(void)didEnterAdManager;
-(void)didFailLoadingAdManagerWithError:(id)arg1 ;
-(void)didTapBackOnAdsManager;
-(void)didSelectAdOnManager;
-(void)didFailLoadAdScreenWithAdViewModel:(id)arg1 error:(id)arg2 ;
-(NSString *)entryPoint;
@end

