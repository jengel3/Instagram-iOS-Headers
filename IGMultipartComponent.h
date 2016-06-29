

@class NSData, NSInputStream;

@interface IGMultipartComponent : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) unsigned length; 
-(unsigned)length;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSInputStream *)inputStream;
@end

