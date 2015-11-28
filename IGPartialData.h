

#import <Instagram/Instagram-Structs.h>
@class NSData, NSMutableData, NSOutputStream;

@interface IGPartialData : NSObject {

	NSData* _data;
	NSMutableData* _streamBuffer;
	NSOutputStream* _downloadStream;
	long long _bufferedLength;
	long long _totalLength;

}

@property (assign,nonatomic) long long bufferedLength;              //@synthesize bufferedLength=_bufferedLength - In the implementation block
@property (assign,nonatomic) long long totalLength;                 //@synthesize totalLength=_totalLength - In the implementation block
+(id)emptyData;
-(char)hasBufferedData;
-(long long)downloadedLength;
-(void)setBufferedLength:(long long)arg1 ;
-(void)increaseBufferedDataBy:(long long)arg1 ;
-(char)hasDataForRange:(NSRange)arg1 ;
-(id)downloadedData;
-(id)initWithPartialData:(id)arg1 totalLength:(long long)arg2 ;
-(long long)bufferedLength;
-(id)description;
-(id)downloadStream;
-(void)setTotalLength:(long long)arg1 ;
-(long long)totalLength;
-(char)hasData;
-(id)subdataWithRange:(NSRange)arg1 ;
@end

