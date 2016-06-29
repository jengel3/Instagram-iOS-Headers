

@class NSString, NSData;

@interface FBSDKGraphRequestDataAttachment : NSObject {

	NSString* _contentType;
	NSData* _data;
	NSString* _filename;

}

@property (nonatomic,copy,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                 //@synthesize filename=_filename - In the implementation block
-(id)initWithData:(id)arg1 filename:(id)arg2 contentType:(id)arg3 ;
-(id)init;
-(NSData *)data;
-(NSString *)contentType;
-(NSString *)filename;
@end

