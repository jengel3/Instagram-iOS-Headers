

#import <Instagram/Instagram-Structs.h>
@interface IGRangedDataListener : NSObject {

	char _headerSent;
	char _done;
	/*^block*/id _dataReceived;
	/*^block*/id _completion;
	NSRange _range;
	long long _readOffset;

}

@property (assign,nonatomic) NSRange range;                     //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long readOffset;              //@synthesize readOffset=_readOffset - In the implementation block
@property (nonatomic,copy) id dataReceived;                     //@synthesize dataReceived=_dataReceived - In the implementation block
@property (nonatomic,copy) id completion;                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) char headerSent;                 //@synthesize headerSent=_headerSent - In the implementation block
@property (assign,nonatomic) char done;                         //@synthesize done=_done - In the implementation block
-(id)dataReceived;
-(id)initWithDataRange:(NSRange)arg1 dataReceived:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendHeader:(id)arg1 ;
-(long long)readOffset;
-(void)setReadOffset:(long long)arg1 ;
-(void)setDataReceived:(id)arg1 ;
-(char)headerSent;
-(id)description;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(char)done;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setDone:(char)arg1 ;
@end

