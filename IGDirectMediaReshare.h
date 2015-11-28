
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentUploadable.h>
#import <Instagram/IGDirectCommentable.h>

@class IGDirectContentUploadInfo, NSString, IGPost;

@interface IGDirectMediaReshare : IGDirectContent <IGDirectContentUploadable, IGDirectCommentable> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	IGPost* _post;

}

@property (nonatomic,retain) IGPost * post;                                       //@synthesize post=_post - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 post:(id)arg2 recipient:(id)arg3 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)digestDescription;
@end

