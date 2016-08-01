
#import <Instagram/IGUserSessionObject.h>

@class IGAutocompleteHashtagsStore, IGService, NSString;

@interface IGCommentDataController : NSObject <IGUserSessionObject> {

	IGAutocompleteHashtagsStore* _hashtagsStore;
	IGService* _service;

}

@property (nonatomic,readonly) IGAutocompleteHashtagsStore * hashtagsStore;              //@synthesize hashtagsStore=_hashtagsStore - In the implementation block
@property (nonatomic,readonly) IGService * service;                                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postComment:(id)arg1 forfeedItemWithPK:(id)arg2 ;
-(IGAutocompleteHashtagsStore *)hashtagsStore;
-(void)removeComment:(id)arg1 feedItemPK:(id)arg2 ;
-(id)initWithAutocompleteHashtagsStore:(id)arg1 service:(id)arg2 ;
-(void)postCommentWithText:(id)arg1 forFeedItem:(id)arg2 ;
-(IGService *)service;
@end

