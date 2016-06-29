
#import <Instagram/IGUserSessionObject.h>

@class NSString, NSDictionary;

@interface IGCameraDraftManager : NSObject <IGUserSessionObject> {

	NSString* _userPK;
	NSDictionary* _draftCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allStoredDrafts;
-(id)directoryForDraft:(id)arg1 ;
-(id)initWithUserPK:(id)arg1 ;
-(void)clearDrafts;
-(void)removeDraft:(id)arg1 ;
-(void)fetchDraftsWithCompletion:(/*^block*/id)arg1 ;
-(char)storeDraft:(id)arg1 ;
@end

