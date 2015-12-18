
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImage, NSData, NSDate, IGRequest, NSMutableDictionary, NSURL, NSArray, NSString, NSMutableArray, IGAnalyticsWaterfall;

@interface IGUploadModel : NSObject <NSCoding> {

	UIImage* _image;
	NSData* _imageData;
	char _isDirectShare;
	int _uploadDataType;
	NSDate* _uploadStartTime;
	int _postStatus;
	int _uploadStatus;
	int _targetStatus;
	IGRequest* _request;
	NSMutableDictionary* _postDict;
	float _uploadProgress;
	unsigned _uploadTaskIdentifier;
	unsigned _configureTaskIdentifier;
	NSData* _videoData;
	NSURL* _videoDataFileURL;
	NSArray* _videoUploadURLs;
	unsigned _currentVideoUploadURLIndex;
	NSString* _transcodeVideoID;
	NSString* _sessionID;
	NSString* _errorMessage;
	int _numberOfFailedConfigures;
	int _numberOfFailedUploads;
	int _numberOfManualRetries;
	int _numberOfManualCancels;
	unsigned _autoRetryResumeUploadCount;
	unsigned _autoRetryConfigureCount;
	NSMutableArray* _currentRangesUploadedAlready;
	IGAnalyticsWaterfall* _waterfall;
	NSDate* _videoStartUploadTime;
	float _videoUploadSpeed;
	double _configureStartTimestamp;

}

@property (assign,nonatomic) int uploadDataType;                                         //@synthesize uploadDataType=_uploadDataType - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) NSData * imageData;                                       //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                                   //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (assign,nonatomic) double configureStartTimestamp;                             //@synthesize configureStartTimestamp=_configureStartTimestamp - In the implementation block
@property (nonatomic,readonly) int postStatus;                                           //@synthesize postStatus=_postStatus - In the implementation block
@property (assign,nonatomic) int uploadStatus;                                           //@synthesize uploadStatus=_uploadStatus - In the implementation block
@property (assign,nonatomic) int targetStatus;                                           //@synthesize targetStatus=_targetStatus - In the implementation block
@property (assign,nonatomic,__weak) IGRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postDict;                             //@synthesize postDict=_postDict - In the implementation block
@property (assign,nonatomic) float uploadProgress;                                       //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) unsigned uploadTaskIdentifier;                              //@synthesize uploadTaskIdentifier=_uploadTaskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned configureTaskIdentifier;                           //@synthesize configureTaskIdentifier=_configureTaskIdentifier - In the implementation block
@property (assign,nonatomic) char isDirectShare;                                         //@synthesize isDirectShare=_isDirectShare - In the implementation block
@property (nonatomic,readonly) char hasVideo; 
@property (nonatomic,retain) NSData * videoData;                                         //@synthesize videoData=_videoData - In the implementation block
@property (nonatomic,copy) NSURL * videoDataFileURL;                                     //@synthesize videoDataFileURL=_videoDataFileURL - In the implementation block
@property (nonatomic,retain) NSArray * videoUploadURLs;                                  //@synthesize videoUploadURLs=_videoUploadURLs - In the implementation block
@property (assign,nonatomic) unsigned currentVideoUploadURLIndex;                        //@synthesize currentVideoUploadURLIndex=_currentVideoUploadURLIndex - In the implementation block
@property (nonatomic,copy) NSString * transcodeVideoID;                                  //@synthesize transcodeVideoID=_transcodeVideoID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                    //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) int numberOfFailedConfigures;                               //@synthesize numberOfFailedConfigures=_numberOfFailedConfigures - In the implementation block
@property (assign,nonatomic) int numberOfFailedUploads;                                  //@synthesize numberOfFailedUploads=_numberOfFailedUploads - In the implementation block
@property (assign,nonatomic) int numberOfManualRetries;                                  //@synthesize numberOfManualRetries=_numberOfManualRetries - In the implementation block
@property (assign,nonatomic) int numberOfManualCancels;                                  //@synthesize numberOfManualCancels=_numberOfManualCancels - In the implementation block
@property (nonatomic,readonly) unsigned totalVideoBytesUploaded; 
@property (nonatomic,readonly) unsigned totalVideoBytesExpectToUpload; 
@property (assign,nonatomic) unsigned autoRetryResumeUploadCount;                        //@synthesize autoRetryResumeUploadCount=_autoRetryResumeUploadCount - In the implementation block
@property (assign,nonatomic) unsigned autoRetryConfigureCount;                           //@synthesize autoRetryConfigureCount=_autoRetryConfigureCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentRangesUploadedAlready;              //@synthesize currentRangesUploadedAlready=_currentRangesUploadedAlready - In the implementation block
@property (nonatomic,retain) IGAnalyticsWaterfall * waterfall;                           //@synthesize waterfall=_waterfall - In the implementation block
@property (nonatomic,copy) NSDate * videoStartUploadTime;                                //@synthesize videoStartUploadTime=_videoStartUploadTime - In the implementation block
@property (assign,nonatomic) float videoUploadSpeed;                                     //@synthesize videoUploadSpeed=_videoUploadSpeed - In the implementation block
@property (nonatomic,readonly) unsigned suggestedChunkSize; 
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(NSDate *)uploadStartTime;
-(char)isDirectShare;
-(void)setIsDirectShare:(char)arg1 ;
-(void)setUploadStatus:(int)arg1 ;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(int)numberOfFailedUploads;
-(void)setNumberOfFailedUploads:(int)arg1 ;
-(NSString *)transcodeVideoID;
-(int)uploadStatusBeforeUploaded;
-(void)setPostStatus:(int)arg1 uploadStatus:(int)arg2 ;
-(int)postStatus;
-(void)setPostDict:(NSMutableDictionary *)arg1 ;
-(int)uploadDataType;
-(NSURL *)videoDataFileURL;
-(NSMutableDictionary *)postDict;
-(id)currentNotExpiredVideoUploadURL;
-(void)setTargetStatus:(int)arg1 ;
-(void)setUploadDataType:(int)arg1 ;
-(void)setWaterfall:(IGAnalyticsWaterfall *)arg1 ;
-(int)numberOfManualCancels;
-(void)setNumberOfManualCancels:(int)arg1 ;
-(id)logWaterfallEvent:(id)arg1 ;
-(int)numberOfManualRetries;
-(void)setNumberOfManualRetries:(int)arg1 ;
-(void)resetUploadSpeed;
-(void)setVideoUploadURLs:(NSArray *)arg1 ;
-(void)setCurrentVideoUploadURLIndex:(unsigned)arg1 ;
-(char)hasDoneUploadWithAllRanges;
-(NSRange)getNextUploadRange;
-(void)setTranscodeVideoID:(NSString *)arg1 ;
-(unsigned)autoRetryResumeUploadCount;
-(void)setAutoRetryResumeUploadCount:(unsigned)arg1 ;
-(id)advanceToNextNotExpiredVideoUploadURL;
-(void)updateUploadRangesInfo:(id)arg1 ;
-(IGAnalyticsWaterfall *)waterfall;
-(unsigned)autoRetryConfigureCount;
-(void)setAutoRetryConfigureCount:(unsigned)arg1 ;
-(unsigned)uploadTaskIdentifier;
-(void)setUploadTaskIdentifier:(unsigned)arg1 ;
-(unsigned)configureTaskIdentifier;
-(void)setConfigureTaskIdentifier:(unsigned)arg1 ;
-(void)setCurrentRangesUploadedAlready:(NSMutableArray *)arg1 ;
-(int)numberOfFailedConfigures;
-(void)setNumberOfFailedConfigures:(int)arg1 ;
-(void)logStatusUpdateWithPreviousUploadStatus:(int)arg1 ;
-(unsigned)totalVideoBytesExpectToUpload;
-(unsigned)suggestedChunkSize;
-(NSArray *)videoUploadURLs;
-(unsigned)currentVideoUploadURLIndex;
-(char)isURLExpired:(id)arg1 ;
-(void)updateUploadProgress:(float)arg1 ;
-(unsigned)totalVideoBytesUploaded;
-(void)updateVideoUploadSpeedWithTotalBytesSent:(long long)arg1 ;
-(float)imageRatio;
-(NSDate *)videoStartUploadTime;
-(void)setVideoUploadSpeed:(float)arg1 ;
-(void)setVideoStartUploadTime:(NSDate *)arg1 ;
-(int)shareType;
-(char)shouldLogUploadStatus:(int)arg1 ;
-(id)nameForUploadStatus:(int)arg1 ;
-(int)targetStatus;
-(void)setConfigureStartTimestamp:(double)arg1 ;
-(double)configureStartTimestamp;
-(void)setVideoDataFileURL:(NSURL *)arg1 ;
-(NSMutableArray *)currentRangesUploadedAlready;
-(float)videoUploadSpeed;
-(NSData *)imageData;
-(void)setVideoData:(NSData *)arg1 ;
-(NSData *)videoData;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(IGRequest *)request;
-(UIImage *)image;
-(int)uploadStatus;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setRequest:(IGRequest *)arg1 ;
-(char)hasVideo;
@end

