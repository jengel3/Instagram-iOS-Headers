
#import <Instagram/IGUserSessionClearableObject.h>

@class IGService, NSString, NSMutableDictionary;

@interface IGPostUploadManager : NSObject <IGUserSessionClearableObject> {

	IGService* _service;
	NSString* _userPK;
	NSMutableDictionary* _managedPosts;

}

@property (nonatomic,retain) IGService * service;                             //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * userPK;                               //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * managedPosts;              //@synthesize managedPosts=_managedPosts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)archivePostsFilePathForUserPK:(id)arg1 ;
+(id)sharedManager;
-(id)newPost;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)removePost:(id)arg1 ;
-(void)unarchivePosts;
-(void)onAppWillBackground:(id)arg1 ;
-(void)onAppWillResume:(id)arg1 ;
-(void)onAppWillTerminate:(id)arg1 ;
-(void)stopObservingPost:(id)arg1 ;
-(void)processPost:(id)arg1 ;
-(void)managePost:(id)arg1 ;
-(void)archivePosts;
-(void)resumePosts;
-(id)archivePostsFilePath;
-(NSMutableDictionary *)managedPosts;
-(void)startObservingPost:(id)arg1 ;
-(void)suspendPosts;
-(id)initWithUserSessionPK:(id)arg1 service:(id)arg2 ;
-(void)removeCompletedPosts;
-(void)setManagedPosts:(NSMutableDictionary *)arg1 ;
-(NSString *)userPK;
-(void)setUserPK:(NSString *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGService *)service;
-(void)setService:(IGService *)arg1 ;
@end

