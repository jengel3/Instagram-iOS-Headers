

@class IGBusinessGraphQLService;

@interface IGInlineInsightsDataProvider : NSObject {

	char _isFetching;
	IGBusinessGraphQLService* _service;

}

@property (assign,nonatomic) char isFetching;                                   //@synthesize isFetching=_isFetching - In the implementation block
@property (nonatomic,readonly) IGBusinessGraphQLService * service;              //@synthesize service=_service - In the implementation block
-(void)queryInsightsForMediaWithID:(id)arg1 insightsType:(int)arg2 successHandler:(/*^block*/id)arg3 failHandler:(/*^block*/id)arg4 ;
-(void)queryOrganicInlineInsightsForMediaWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failHandler:(/*^block*/id)arg3 ;
-(void)queryAdsInlineInsightsForMediaWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failHandler:(/*^block*/id)arg3 ;
-(id)init;
-(IGBusinessGraphQLService *)service;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
@end

