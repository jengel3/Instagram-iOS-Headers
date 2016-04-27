

@class IGAdsManagerDataProvider, IGGraphQLService;

@interface IGAdsManagerDeleteAdHandler : NSObject {

	IGAdsManagerDataProvider* _adsDataProvider;

}

@property (readonly) IGGraphQLService * graphQLService; 
@property (nonatomic,readonly) IGAdsManagerDataProvider * adsDataProvider;              //@synthesize adsDataProvider=_adsDataProvider - In the implementation block
-(void)updateFeedItemForDeletedPromotionStateWithAdViewModel:(id)arg1 ;
-(IGAdsManagerDataProvider *)adsDataProvider;
-(void)performDeleteForFeedItem:(id)arg1 successCompletion:(/*^block*/id)arg2 errorCompletion:(/*^block*/id)arg3 ;
-(void)performDeleteForAd:(id)arg1 successCompletion:(/*^block*/id)arg2 errorCompletion:(/*^block*/id)arg3 ;
-(IGGraphQLService *)graphQLService;
-(id)init;
@end

