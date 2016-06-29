
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectUploadable.h>
#import <Instagram/IGDirectUploadableProducer.h>

@class IGDirectContentUploadInfo, NSString, IGDirectContent;

@interface IGDirectContentShare : IGDirectContent <IGDirectUploadable, IGDirectUploadableProducer> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _originalItemThreadId;
	IGDirectContent* _originalItem;

}

@property (nonatomic,retain) NSString * originalItemThreadId;                   //@synthesize originalItemThreadId=_originalItemThreadId - In the implementation block
@property (nonatomic,retain) IGDirectContent * originalItem;                    //@synthesize originalItem=_originalItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(id)contentTypeString;
-(NSString *)originalItemThreadId;
-(void)setOriginalItemThreadId:(NSString *)arg1 ;
-(id)initWithContent:(id)arg1 originalItemThreadId:(id)arg2 ;
-(IGDirectContent *)originalItem;
-(void)setOriginalItem:(IGDirectContent *)arg1 ;
-(void)setRecipient:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

