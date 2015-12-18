
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectComment : IGDirectContent <IGDirectContentRealtimeUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentWithItemId:(id)arg1 ;
-(id)serializedStringForRealtimeUpload;
-(id)contentTypeString;
-(id)initAsUploadWithText:(id)arg1 recipient:(id)arg2 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)digestDescription;
@end

