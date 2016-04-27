

#import <Instagram/Instagram-Structs.h>
@interface IGRangedDataListener : NSObject {

	char _headerSent;
	char _done;
	/*^block*/id _dataReceived;
	/*^block*/id _headerReceived;
	/*^block*/id _completion;
	NSRange _range;
	long long _readOffset;

}

@property (assign,nonatomic) NSRange range;                     //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long readOffset;              //@synthesize readOffset=_readOffset - In the implementation block
@property (nonatomic,copy) id dataReceived;                     //@synthesize dataReceived=_dataReceived - In the implementation block
@property (nonatomic,copy) id headerReceived;                   //@synthesize headerReceived=_headerReceived - In the implementation block
@property (nonatomic,copy) id completion;                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) char headerSent;                 //@synthesize headerSent=_headerSent - In the implementation block
@property (assign,nonatomic) char done;                         //@synthesize done=_done - In the implementation block
-(long long)readOffset;
-(id)headerReceived;
-(id)initWithDataRange:(NSRange)arg1 headerReceived:(/*^block*/id)arg2 dataReceived:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendHeader:(id)arg1 ;
-(void)setReadOffset:(long long)arg1 ;
-(id)dataReceived;
-(void)setDataReceived:(id)arg1 ;
-(void)setHeaderReceived:(id)arg1 ;
-(char)headerSent;
-(id)description;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(char)done;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setDone:(char)arg1 ;
@end

