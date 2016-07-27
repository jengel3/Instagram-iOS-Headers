
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
-(char)validateDraft:(id)arg1 ;
-(id)directoryForDraft:(id)arg1 ;
-(void)encodingFinished;
-(id)initWithUserPK:(id)arg1 ;
-(void)clearDraftsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeDraft:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAllDraftsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDraftsCount:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)storeDraft:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

