
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGVideoRendererProgressDelegate.h>

@class UIImage, NSData, NSString, IGUploadVideoMetaData, NSDate, IGRequest, NSMutableDictionary, IGVideoComposition, NSURL, NSArray, IGVideoRenderer, NSMutableArray, IGAnalyticsWaterfall;

@interface IGUploadModel : NSObject <NSCoding, IGVideoRendererProgressDelegate> {

	UIImage* _image;
	NSData* _imageData;
	NSString* _userPK;
	int _uploadDataType;
	IGUploadVideoMetaData* _videoMetadata;
	NSDate* _uploadStartTime;
	int _postAction;
	int _postStatus;
	int _fromStatus;
	int _toStatus;
	IGRequest* _request;
	NSMutableDictionary* _postDict;
	float _renderProgress;
	float _uploadProgress;
	unsigned _uploadTaskIdentifier;
	unsigned _configureTaskIdentifier;
	int _shareType;
	NSString* _albumPK;
	IGVideoComposition* _videoComposition;
	NSURL* _videoDataFileURL;
	NSArray* _videoUploadURLs;
	unsigned _currentVideoUploadURLIndex;
	NSString* _transcodeVideoID;
	NSString* _sessionID;
	IGVideoRenderer* _videoRenderer;
	float _videoMaxDuration;
	NSString* _errorMessage;
	int _numberOfFailedConfigures;
	int _numberOfFailedUploads;
	int _numberOfManualRetries;
	int _numberOfManualCancels;
	int _autoRetryResumeUploadCount;
	int _autoRetryConfigureCount;
	NSMutableArray* _currentRangesUploadedAlready;
	IGAnalyticsWaterfall* _waterfall;
	NSDate* _videoStartUploadTime;
	float _videoUploadSpeed;
	unsigned _photoBytesUploaded;
	unsigned _videoBytesUploaded;
	int _qeUseSVE;
	double _configureStartTimestamp;

}

@property (nonatomic,retain) NSString * userPK;                                          //@synthesize userPK=_userPK - In the implementation block
@property (assign,nonatomic) int uploadDataType;                                         //@synthesize uploadDataType=_uploadDataType - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) NSData * imageData;                                       //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) IGUploadVideoMetaData * videoMetadata;                      //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                                   //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (assign,nonatomic) double configureStartTimestamp;                             //@synthesize configureStartTimestamp=_configureStartTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * uploadID; 
@property (assign,nonatomic) int postAction;                                             //@synthesize postAction=_postAction - In the implementation block
@property (assign,nonatomic) int postStatus;                                             //@synthesize postStatus=_postStatus - In the implementation block
@property (nonatomic,readonly) int fromStatus;                                           //@synthesize fromStatus=_fromStatus - In the implementation block
@property (nonatomic,readonly) int toStatus;                                             //@synthesize toStatus=_toStatus - In the implementation block
@property (assign,nonatomic,__weak) IGRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postDict;                             //@synthesize postDict=_postDict - In the implementation block
@property (assign,nonatomic) float renderProgress;                                       //@synthesize renderProgress=_renderProgress - In the implementation block
@property (assign,nonatomic) float uploadProgress;                                       //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) unsigned uploadTaskIdentifier;                              //@synthesize uploadTaskIdentifier=_uploadTaskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned configureTaskIdentifier;                           //@synthesize configureTaskIdentifier=_configureTaskIdentifier - In the implementation block
@property (assign,nonatomic) int shareType;                                              //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,copy) NSString * albumPK;                                           //@synthesize albumPK=_albumPK - In the implementation block
@property (nonatomic,retain) IGVideoComposition * videoComposition;                      //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy) NSURL * videoDataFileURL;                                     //@synthesize videoDataFileURL=_videoDataFileURL - In the implementation block
@property (nonatomic,retain) NSArray * videoUploadURLs;                                  //@synthesize videoUploadURLs=_videoUploadURLs - In the implementation block
@property (assign,nonatomic) unsigned currentVideoUploadURLIndex;                        //@synthesize currentVideoUploadURLIndex=_currentVideoUploadURLIndex - In the implementation block
@property (nonatomic,copy) NSString * transcodeVideoID;                                  //@synthesize transcodeVideoID=_transcodeVideoID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) IGVideoRenderer * videoRenderer;                     //@synthesize videoRenderer=_videoRenderer - In the implementation block
@property (assign,nonatomic) float videoMaxDuration;                                     //@synthesize videoMaxDuration=_videoMaxDuration - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                    //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) int numberOfFailedConfigures;                               //@synthesize numberOfFailedConfigures=_numberOfFailedConfigures - In the implementation block
@property (assign,nonatomic) int numberOfFailedUploads;                                  //@synthesize numberOfFailedUploads=_numberOfFailedUploads - In the implementation block
@property (assign,nonatomic) int numberOfManualRetries;                                  //@synthesize numberOfManualRetries=_numberOfManualRetries - In the implementation block
@property (assign,nonatomic) int numberOfManualCancels;                                  //@synthesize numberOfManualCancels=_numberOfManualCancels - In the implementation block
@property (nonatomic,readonly) unsigned totalVideoBytesUploaded; 
@property (nonatomic,readonly) unsigned totalVideoBytesExpectToUpload; 
@property (assign,nonatomic) int autoRetryResumeUploadCount;                             //@synthesize autoRetryResumeUploadCount=_autoRetryResumeUploadCount - In the implementation block
@property (assign,nonatomic) int autoRetryConfigureCount;                                //@synthesize autoRetryConfigureCount=_autoRetryConfigureCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentRangesUploadedAlready;              //@synthesize currentRangesUploadedAlready=_currentRangesUploadedAlready - In the implementation block
@property (nonatomic,retain) IGAnalyticsWaterfall * waterfall;                           //@synthesize waterfall=_waterfall - In the implementation block
@property (nonatomic,copy) NSDate * videoStartUploadTime;                                //@synthesize videoStartUploadTime=_videoStartUploadTime - In the implementation block
@property (assign,nonatomic) float videoUploadSpeed;                                     //@synthesize videoUploadSpeed=_videoUploadSpeed - In the implementation block
@property (nonatomic,readonly) unsigned suggestedChunkSize; 
@property (assign,nonatomic) unsigned photoBytesUploaded;                                //@synthesize photoBytesUploaded=_photoBytesUploaded - In the implementation block
@property (assign,nonatomic) unsigned videoBytesUploaded;                                //@synthesize videoBytesUploaded=_videoBytesUploaded - In the implementation block
@property (assign,nonatomic) int qeUseSVE;                                               //@synthesize qeUseSVE=_qeUseSVE - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)version;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(NSString *)albumPK;
-(NSDate *)uploadStartTime;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(int)shareType;
-(IGUploadVideoMetaData *)videoMetadata;
-(void)setShareType:(int)arg1 ;
-(int)numberOfFailedUploads;
-(void)setNumberOfFailedUploads:(int)arg1 ;
-(unsigned)totalVideoBytesUploaded;
-(int)postStatusFromPostStatusV0:(int)arg1 ;
-(void)updatePostStatusAfterInitFromCoder;
-(NSString *)userPK;
-(NSURL *)videoDataFileURL;
-(IGAnalyticsWaterfall *)waterfall;
-(int)uploadDataType;
-(id)currentNotExpiredVideoUploadURL;
-(void)setPostStatus:(int)arg1 fromStatus:(int)arg2 toStatus:(int)arg3 ;
-(int)postStatus;
-(void)setPostStatus:(int)arg1 toStatus:(int)arg2 ;
-(void)setPostStatus:(int)arg1 ;
-(void)handleUploadSuspended;
-(void)handleUploadFailure;
-(void)handleConfigureFailure;
-(void)logStatusUpdate;
-(void)logActionUpdate;
-(char)isAlbumUpload;
-(NSMutableDictionary *)postDict;
-(void)setAutoRetryResumeUploadCount:(int)arg1 ;
-(void)setCurrentRangesUploadedAlready:(NSMutableArray *)arg1 ;
-(void)setVideoUploadURLs:(NSArray *)arg1 ;
-(void)setCurrentVideoUploadURLIndex:(unsigned)arg1 ;
-(void)setPhotoBytesUploaded:(unsigned)arg1 ;
-(void)setVideoBytesUploaded:(unsigned)arg1 ;
-(int)numberOfFailedConfigures;
-(void)setNumberOfFailedConfigures:(int)arg1 ;
-(unsigned)totalVideoBytesExpectToUpload;
-(unsigned)suggestedChunkSize;
-(NSArray *)videoUploadURLs;
-(unsigned)currentVideoUploadURLIndex;
-(char)isURLExpired:(id)arg1 ;
-(id)advanceToNextNotExpiredVideoUploadURL;
-(void)updatePhotoUploadProgress:(unsigned)arg1 ;
-(void)updateVideoUploadProgress:(unsigned)arg1 ;
-(void)updateVideoUploadSpeedWithTotalBytesSent:(long long)arg1 ;
-(NSDate *)videoStartUploadTime;
-(void)setVideoUploadSpeed:(float)arg1 ;
-(void)setVideoStartUploadTime:(NSDate *)arg1 ;
-(int)numberOfManualRetries;
-(int)numberOfManualCancels;
-(void)setConfigureStartTimestamp:(double)arg1 ;
-(id)logWaterfallEvent:(id)arg1 ;
-(int)fromStatus;
-(id)nameForUploadStatus:(int)arg1 ;
-(int)toStatus;
-(int)targetUploadStatus;
-(double)configureStartTimestamp;
-(id)videoQEAnalyticsExtraData;
-(id)videoAnalyticsExtraDataForStatusEvent;
-(int)postAction;
-(id)videoAnalyticsExtraDataForActionEvent;
-(float)videoMaxDuration;
-(int)qeUseSVE;
-(void)videoRenderer:(id)arg1 didProgress:(float)arg2 ;
-(id)initWithStartTime:(id)arg1 userPK:(id)arg2 ;
-(void)setVideoDataFileURL:(NSURL *)arg1 ;
-(void)setVideoRenderer:(IGVideoRenderer *)arg1 ;
-(void)didFailUpload;
-(void)setPostAction:(int)arg1 ;
-(char)isInitialAlbumUpload;
-(char)isAddToAlbumUpload;
-(char)hasDoneUploadWithAllRanges;
-(NSRange)getNextUploadRange;
-(void)updateUploadRangesInfo:(id)arg1 ;
-(void)resetUploadSpeed;
-(void)setUserPK:(NSString *)arg1 ;
-(void)setUploadDataType:(int)arg1 ;
-(void)setVideoMetadata:(IGUploadVideoMetaData *)arg1 ;
-(void)setPostDict:(NSMutableDictionary *)arg1 ;
-(unsigned)uploadTaskIdentifier;
-(void)setUploadTaskIdentifier:(unsigned)arg1 ;
-(unsigned)configureTaskIdentifier;
-(void)setConfigureTaskIdentifier:(unsigned)arg1 ;
-(void)setAlbumPK:(NSString *)arg1 ;
-(NSString *)transcodeVideoID;
-(void)setTranscodeVideoID:(NSString *)arg1 ;
-(IGVideoRenderer *)videoRenderer;
-(void)setVideoMaxDuration:(float)arg1 ;
-(void)setNumberOfManualRetries:(int)arg1 ;
-(void)setNumberOfManualCancels:(int)arg1 ;
-(int)autoRetryResumeUploadCount;
-(int)autoRetryConfigureCount;
-(void)setAutoRetryConfigureCount:(int)arg1 ;
-(NSMutableArray *)currentRangesUploadedAlready;
-(void)setWaterfall:(IGAnalyticsWaterfall *)arg1 ;
-(float)videoUploadSpeed;
-(unsigned)photoBytesUploaded;
-(unsigned)videoBytesUploaded;
-(void)setQeUseSVE:(int)arg1 ;
-(float)renderProgress;
-(void)setRenderProgress:(float)arg1 ;
-(IGVideoComposition *)videoComposition;
-(void)setVideoComposition:(IGVideoComposition *)arg1 ;
-(NSData *)imageData;
-(id)videoData;
-(NSString *)uploadID;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(IGRequest *)request;
-(UIImage *)image;
-(void)commonInit;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setRequest:(IGRequest *)arg1 ;
-(char)hasVideo;
@end

