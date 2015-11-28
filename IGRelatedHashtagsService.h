

@class IGService;

@interface IGRelatedHashtagsService : NSObject {

	IGService* _service;

}

@property (nonatomic,retain) IGService * service;              //@synthesize service=_service - In the implementation block
-(void)requestRelatedTagsForHashtag:(id)arg1 visitedHashtags:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)requestParametersWithVisitedHashtags:(id)arg1 ;
-(id)JSONFromVisitedHashtags:(id)arg1 ;
-(id)JSONStringFromObject:(id)arg1 ;
-(IGService *)service;
-(id)initWithService:(id)arg1 ;
-(void)setService:(IGService *)arg1 ;
@end

