
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGDraftBeingStored, IGDraftEnumerator, NSLock;

@interface IGCameraDraftManager : NSObject <IGUserSessionClearableObject> {

	NSString* _userPK;
	IGDraftBeingStored* _draftBeingStored;
	IGDraftEnumerator* _draftEnumerator;
	NSLock* _draftEnumeratorLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)clipExportFinished;
-(id)storedDraftEnumerator;
-(void)removeInvalidDraftsAsync;
-(char)validateDraft:(id)arg1 ;
-(id)directoryForDraft:(id)arg1 ;
-(void)encodingFinished;
-(void)removeDraft:(id)arg1 enumeratorRemovalBlock:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)draftEnumeratorHelperValid:(char)arg1 ;
-(id)storedInvalidDraftEnumerator;
-(void)clearDraftsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeDraft:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAllDraftsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDraftsCount:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithUserPK:(id)arg1 ;
-(void)storeDraft:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

