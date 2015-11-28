
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentUploadable.h>
#import <Instagram/IGDirectCommentable.h>

@class IGDirectContentUploadInfo, NSString, NSArray;

@interface IGDirectShareHashtag : IGDirectContent <IGDirectContentUploadable, IGDirectCommentable> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	NSString* _hashtagName;
	unsigned _mediaCount;
	NSArray* _previewMedia;

}

@property (nonatomic,copy) NSString * hashtagName;                                //@synthesize hashtagName=_hashtagName - In the implementation block
@property (assign,nonatomic) unsigned mediaCount;                                 //@synthesize mediaCount=_mediaCount - In the implementation block
@property (nonatomic,retain) NSArray * previewMedia;                              //@synthesize previewMedia=_previewMedia - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
-(unsigned)mediaCount;
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(NSString *)hashtagName;
-(NSArray *)previewMedia;
-(id)initAsUploadWithComment:(id)arg1 hashtagName:(id)arg2 recipient:(id)arg3 ;
-(void)setHashtagName:(NSString *)arg1 ;
-(void)setMediaCount:(unsigned)arg1 ;
-(void)setPreviewMedia:(NSArray *)arg1 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)digestDescription;
@end

