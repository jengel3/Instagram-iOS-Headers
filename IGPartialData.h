

#import <Instagram/Instagram-Structs.h>
@class NSData, NSMutableData, NSOutputStream;

@interface IGPartialData : NSObject {

	NSData* _data;
	NSMutableData* _streamBuffer;
	NSOutputStream* _downloadStream;
	unsigned _bufferedLength;
	unsigned _totalLength;

}

@property (nonatomic,readonly) unsigned downloadedLength; 
@property (assign,nonatomic) unsigned bufferedLength;                  //@synthesize bufferedLength=_bufferedLength - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                     //@synthesize totalLength=_totalLength - In the implementation block
+(id)emptyData;
-(char)hasDataForRange:(NSRange)arg1 ;
-(unsigned)downloadedLength;
-(id)downloadedData;
-(id)initWithPartialData:(id)arg1 totalLength:(unsigned)arg2 ;
-(void)increaseBufferedDataBy:(unsigned)arg1 ;
-(char)hasBufferedData;
-(unsigned)bufferedLength;
-(void)setBufferedLength:(unsigned)arg1 ;
-(id)description;
-(id)downloadStream;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(char)hasData;
-(id)subdataWithRange:(NSRange)arg1 ;
@end

