
#import <Instagram/IGAlbumCreationViewControllerDataDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class IGAlbumCreationModel, IGUserDefaults, NSMutableArray, NSDate, NSString;

@interface IGAlbumCreationManager : NSObject <IGAlbumCreationViewControllerDataDelegate, IGUserSessionClearableObject> {

	IGAlbumCreationModel* _model;
	IGUserDefaults* _userSessionDefaults;
	NSMutableArray* _pendingUploads;
	NSDate* _currentUploadStartTime;

}

@property (nonatomic,retain) IGAlbumCreationModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) IGUserDefaults * userSessionDefaults;              //@synthesize userSessionDefaults=_userSessionDefaults - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingUploads;                   //@synthesize pendingUploads=_pendingUploads - In the implementation block
@property (nonatomic,retain) NSDate * currentUploadStartTime;                   //@synthesize currentUploadStartTime=_currentUploadStartTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(id)unarchiveCurrentAlbum;
-(void)handleAlbumShared:(id)arg1 ;
-(void)archiveCurrentAlbum:(id)arg1 ;
-(void)removeArchivedCurrentAlbum;
-(void)processAssetUpload:(id)arg1 ;
-(char)shouldSaveToLibrary;
-(IGUserDefaults *)userSessionDefaults;
-(void)uploadNextAsset;
-(void)updateAlbumTitle:(id)arg1 ;
-(void)creationViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)creationViewController:(id)arg1 didUpdateTitle:(id)arg2 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithUserSessionDefaults:(id)arg1 ;
-(void)setUserSessionDefaults:(IGUserDefaults *)arg1 ;
-(NSMutableArray *)pendingUploads;
-(void)setPendingUploads:(NSMutableArray *)arg1 ;
-(NSDate *)currentUploadStartTime;
-(void)setCurrentUploadStartTime:(NSDate *)arg1 ;
-(void)dealloc;
-(IGAlbumCreationModel *)model;
-(void)setModel:(IGAlbumCreationModel *)arg1 ;
@end

