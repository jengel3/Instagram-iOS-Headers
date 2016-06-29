
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectLike : IGDirectContent <IGDirectContentRealtimeUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)dictionaryForRealtimeUpload;
-(char)supportsNonSimpleFormatForRealtime;
-(id)contentTypeString;
-(id)initAsUploadWithRecipient:(id)arg1 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

