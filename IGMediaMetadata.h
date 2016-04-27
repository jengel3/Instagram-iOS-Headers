
#import <Instagram/IGMediaMetadataProtocol.h>

@class NSString, IGDirectShareRecipient, IGLocationMetadata, IGUsertagsMetadata, IGShareListManager, NSNumber, NSDictionary, IGVideoMetadata, NSArray, IGEditsMetadata, NSDate, UIImage, IGUploadModel;

@interface IGMediaMetadata : NSObject <IGMediaMetadataProtocol> {

	char _shouldKeepCaptionOnMediaChange;
	NSString* _caption;
	int _shareType;
	IGDirectShareRecipient* _dv2Recipient;
	IGLocationMetadata* _locationMetadata;
	IGUsertagsMetadata* _usertagsMetadata;
	IGShareListManager* _shareListManager;
	NSNumber* _expireInSeconds;
	float _captionPositionY;
	NSString* _albumCaption;
	int _mediaType;
	int _sourceType;
	NSDictionary* _exifData;
	int _deviceOrientation;
	int _cameraPosition;
	float _deviceAngle;
	IGVideoMetadata* _videoMetadata;
	NSArray* _preselectedIdentifiers;
	IGEditsMetadata* _editsMetadata;
	NSDate* _uploadStartTime;
	UIImage* _snapshot;
	int _preselectedMediaBehavior;

}

@property (nonatomic,copy) NSString * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) char shouldKeepCaptionOnMediaChange;                  //@synthesize shouldKeepCaptionOnMediaChange=_shouldKeepCaptionOnMediaChange - In the implementation block
@property (assign,nonatomic) int shareType;                                        //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * dv2Recipient;                //@synthesize dv2Recipient=_dv2Recipient - In the implementation block
@property (nonatomic,retain) IGLocationMetadata * locationMetadata;                //@synthesize locationMetadata=_locationMetadata - In the implementation block
@property (nonatomic,readonly) IGUsertagsMetadata * usertagsMetadata;              //@synthesize usertagsMetadata=_usertagsMetadata - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;                //@synthesize shareListManager=_shareListManager - In the implementation block
@property (nonatomic,retain) NSNumber * expireInSeconds;                           //@synthesize expireInSeconds=_expireInSeconds - In the implementation block
@property (assign,nonatomic) float captionPositionY;                               //@synthesize captionPositionY=_captionPositionY - In the implementation block
@property (nonatomic,copy) NSString * albumCaption;                                //@synthesize albumCaption=_albumCaption - In the implementation block
@property (nonatomic,readonly) int mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSDictionary * exifData;                            //@synthesize exifData=_exifData - In the implementation block
@property (nonatomic,readonly) int deviceOrientation;                              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) int cameraPosition;                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) float deviceAngle;                                  //@synthesize deviceAngle=_deviceAngle - In the implementation block
@property (nonatomic,readonly) IGVideoMetadata * videoMetadata;                    //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) NSArray * preselectedIdentifiers;                     //@synthesize preselectedIdentifiers=_preselectedIdentifiers - In the implementation block
@property (nonatomic,retain) IGEditsMetadata * editsMetadata;                      //@synthesize editsMetadata=_editsMetadata - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                             //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (nonatomic,readonly) IGUploadModel * upload; 
@property (nonatomic,retain) UIImage * snapshot;                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) int preselectedMediaBehavior;                         //@synthesize preselectedMediaBehavior=_preselectedMediaBehavior - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(void)prepareForNewMediaOfType:(int)arg1 fromSource:(int)arg2 EXIFDictionary:(id)arg3 deviceOrientation:(int)arg4 cameraPosition:(int)arg5 deviceAngle:(float)arg6 editsMetadata:(id)arg7 videoMetadata:(id)arg8 ;
-(NSDictionary *)exifData;
-(void)updateIsAudioMuted:(char)arg1 ;
-(NSDate *)uploadStartTime;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(IGLocationMetadata *)locationMetadata;
-(IGUsertagsMetadata *)usertagsMetadata;
-(float)captionPositionY;
-(NSString *)albumCaption;
-(int)shareType;
-(NSNumber *)expireInSeconds;
-(IGShareListManager *)shareListManager;
-(void)updateEditsInfo:(id)arg1 ;
-(void)updateCoverFramePosition:(float)arg1 ;
-(char)shouldKeepCaptionOnMediaChange;
-(void)setShouldKeepCaptionOnMediaChange:(char)arg1 ;
-(void)setLocationMetadata:(IGLocationMetadata *)arg1 ;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(void)setExpireInSeconds:(NSNumber *)arg1 ;
-(void)setCaptionPositionY:(float)arg1 ;
-(void)setAlbumCaption:(NSString *)arg1 ;
-(void)setEditsMetadata:(IGEditsMetadata *)arg1 ;
-(void)setPreselectedMediaBehavior:(int)arg1 ;
-(int)preselectedMediaBehavior;
-(NSArray *)preselectedIdentifiers;
-(void)setPreselectedIdentifiers:(NSArray *)arg1 ;
-(IGVideoMetadata *)videoMetadata;
-(IGEditsMetadata *)editsMetadata;
-(void)prepareForNewVideo:(id)arg1 editsMetadata:(id)arg2 ;
-(void)cancelCurrentUpload;
-(void)prepareForNewPhotoFromSource:(int)arg1 EXIFDictionary:(id)arg2 deviceOrientation:(int)arg3 cameraPosition:(int)arg4 deviceAngle:(float)arg5 ;
-(float)deviceAngle;
-(void)setShareType:(int)arg1 ;
-(IGUploadModel *)upload;
-(IGDirectShareRecipient *)dv2Recipient;
-(void)setDv2Recipient:(IGDirectShareRecipient *)arg1 ;
-(int)mediaType;
-(id)init;
-(UIImage *)snapshot;
-(int)deviceOrientation;
-(int)sourceType;
-(void)setSnapshot:(UIImage *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(int)cameraPosition;
@end

