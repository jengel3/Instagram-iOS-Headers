
#import <Instagram/IGMediaMetadataProtocol.h>

@class NSString, NSSet, IGDirectShareRecipient, IGLocationMetadata, IGUsertagsMetadata, IGShareListManager, NSDictionary, IGVideoMetadata, IGEditsMetadata, NSDate, UIImage, NSURL, IGUploadModel;

@interface IGMediaMetadata : NSObject <IGMediaMetadataProtocol> {

	char _shouldKeepCaptionOnMediaChange;
	char _isDirectShare;
	NSString* _caption;
	NSSet* _recipients;
	IGDirectShareRecipient* _dv2Recipient;
	IGLocationMetadata* _locationMetadata;
	IGUsertagsMetadata* _usertagsMetadata;
	IGShareListManager* _shareListManager;
	int _mediaType;
	int _sourceType;
	NSDictionary* _exifData;
	int _deviceOrientation;
	int _cameraPosition;
	float _deviceAngle;
	IGVideoMetadata* _videoMetadata;
	IGEditsMetadata* _editsMetadata;
	NSDate* _uploadStartTime;
	UIImage* _snapshot;
	NSURL* _defaultAssetURL;
	NSString* _defaultLocalIdentifier;

}

@property (nonatomic,copy) NSString * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) char shouldKeepCaptionOnMediaChange;                  //@synthesize shouldKeepCaptionOnMediaChange=_shouldKeepCaptionOnMediaChange - In the implementation block
@property (assign,nonatomic) char isDirectShare;                                   //@synthesize isDirectShare=_isDirectShare - In the implementation block
@property (nonatomic,retain) NSSet * recipients;                                   //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * dv2Recipient;                //@synthesize dv2Recipient=_dv2Recipient - In the implementation block
@property (nonatomic,readonly) IGLocationMetadata * locationMetadata;              //@synthesize locationMetadata=_locationMetadata - In the implementation block
@property (nonatomic,readonly) IGUsertagsMetadata * usertagsMetadata;              //@synthesize usertagsMetadata=_usertagsMetadata - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;                //@synthesize shareListManager=_shareListManager - In the implementation block
@property (nonatomic,readonly) int mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSDictionary * exifData;                            //@synthesize exifData=_exifData - In the implementation block
@property (nonatomic,readonly) int deviceOrientation;                              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) int cameraPosition;                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) float deviceAngle;                                  //@synthesize deviceAngle=_deviceAngle - In the implementation block
@property (nonatomic,readonly) IGVideoMetadata * videoMetadata;                    //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) IGEditsMetadata * editsMetadata;                      //@synthesize editsMetadata=_editsMetadata - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                             //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (nonatomic,readonly) IGUploadModel * upload; 
@property (nonatomic,retain) UIImage * snapshot;                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) NSURL * defaultAssetURL;                              //@synthesize defaultAssetURL=_defaultAssetURL - In the implementation block
@property (nonatomic,retain) NSString * defaultLocalIdentifier;                    //@synthesize defaultLocalIdentifier=_defaultLocalIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)deviceAngle;
-(void)prepareForNewPhotoFromSource:(int)arg1 EXIFDictionary:(id)arg2 deviceOrientation:(int)arg3 cameraPosition:(int)arg4 deviceAngle:(float)arg5 ;
-(void)cancelCurrentUpload;
-(void)updateEditsInfo:(id)arg1 ;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(NSDate *)uploadStartTime;
-(void)setShouldKeepCaptionOnMediaChange:(char)arg1 ;
-(NSDictionary *)exifData;
-(IGLocationMetadata *)locationMetadata;
-(IGUsertagsMetadata *)usertagsMetadata;
-(void)prepareToShare;
-(id)sharingInfo;
-(void)prepareForNewMediaOfType:(int)arg1 fromSource:(int)arg2 EXIFDictionary:(id)arg3 deviceOrientation:(int)arg4 cameraPosition:(int)arg5 deviceAngle:(float)arg6 editsMetadata:(id)arg7 videoMetadata:(id)arg8 ;
-(void)updateIsAudioMuted:(char)arg1 ;
-(IGUploadModel *)upload;
-(IGVideoMetadata *)videoMetadata;
-(IGEditsMetadata *)editsMetadata;
-(char)isDirectShare;
-(void)setIsDirectShare:(char)arg1 ;
-(IGShareListManager *)shareListManager;
-(void)prepareForNewVideo:(id)arg1 editsMetadata:(id)arg2 ;
-(void)updateCoverFramePosition:(float)arg1 ;
-(char)shouldKeepCaptionOnMediaChange;
-(IGDirectShareRecipient *)dv2Recipient;
-(void)setDv2Recipient:(IGDirectShareRecipient *)arg1 ;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(void)setEditsMetadata:(IGEditsMetadata *)arg1 ;
-(NSURL *)defaultAssetURL;
-(void)setDefaultAssetURL:(NSURL *)arg1 ;
-(NSString *)defaultLocalIdentifier;
-(void)setDefaultLocalIdentifier:(NSString *)arg1 ;
-(int)mediaType;
-(NSSet *)recipients;
-(void)setRecipients:(NSSet *)arg1 ;
-(id)init;
-(UIImage *)snapshot;
-(int)deviceOrientation;
-(int)sourceType;
-(void)setSnapshot:(UIImage *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(int)cameraPosition;
@end

