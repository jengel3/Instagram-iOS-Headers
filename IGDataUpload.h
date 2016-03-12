

@class NSData, NSString;

@interface IGDataUpload : NSObject {

	NSData* _data;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
+(id)dataUploadWithData:(id)arg1 mimeType:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end

