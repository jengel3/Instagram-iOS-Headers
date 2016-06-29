

@class NSDictionary;

@interface IGFeedItemHideNotificationDataObject : NSObject {

	id _object;
	NSDictionary* _extra;

}

@property (nonatomic,readonly) id object;                              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
-(NSDictionary *)extra;
-(id)initWithObject:(id)arg1 extraDictionary:(id)arg2 ;
-(id)object;
@end

