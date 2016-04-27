
#import <libobjc.A.dylib/NSCoding.h>

@class IGDirectShareRecipient, NSString, NSHashTable;

@interface IGDirectContentUploadInfo : NSObject <NSCoding> {

	char _isViaRealtime;
	IGDirectShareRecipient* _recipient;
	NSString* _threadID;
	NSString* _uploadIndexKey;
	int _uploadStatus;
	float _uploadProgress;
	unsigned _autoRetryCount;
	NSHashTable* _observers;

}

@property (nonatomic,retain) IGDirectShareRecipient * recipient;               //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NSString * threadID;                              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy) NSString * uploadIndexKey;                          //@synthesize uploadIndexKey=_uploadIndexKey - In the implementation block
@property (assign,nonatomic) int uploadStatus;                                 //@synthesize uploadStatus=_uploadStatus - In the implementation block
@property (assign,nonatomic) float uploadProgress;                             //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) char isViaRealtime;                               //@synthesize isViaRealtime=_isViaRealtime - In the implementation block
@property (assign,nonatomic) unsigned autoRetryCount;                          //@synthesize autoRetryCount=_autoRetryCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * digestDescription; 
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(unsigned)autoRetryCount;
-(id)stringForUploadStatus:(int)arg1 ;
-(char)isViaRealtime;
-(void)setUploadStatus:(int)arg1 ;
-(void)setThreadID:(NSString *)arg1 ;
-(NSString *)uploadIndexKey;
-(void)setUploadIndexKey:(NSString *)arg1 ;
-(void)setIsViaRealtime:(char)arg1 ;
-(void)setAutoRetryCount:(unsigned)arg1 ;
-(id)initWithRecipient:(id)arg1 ;
-(IGDirectShareRecipient *)recipient;
-(void)setRecipient:(IGDirectShareRecipient *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(int)uploadStatus;
-(NSString *)digestDescription;
-(void)removeUploadObserver:(id)arg1 ;
-(NSString *)threadID;
@end

