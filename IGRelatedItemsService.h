

@class IGService;

@interface IGRelatedItemsService : NSObject {

	IGService* _service;

}

@property (nonatomic,retain) IGService * service;              //@synthesize service=_service - In the implementation block
-(void)requestRelatedItemsForItem:(id)arg1 visitedItems:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)requestParametersWithVisitedItems:(id)arg1 relatedTypes:(id)arg2 ;
-(id)JSONFromVisitedItems:(id)arg1 ;
-(id)JSONStringFromObject:(id)arg1 ;
-(id)init;
-(IGService *)service;
-(id)initWithService:(id)arg1 ;
-(void)setService:(IGService *)arg1 ;
@end

