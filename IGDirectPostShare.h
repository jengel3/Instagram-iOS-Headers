
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectContentReactable.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString, NSArray, IGPost;

@interface IGDirectPostShare : IGDirectContent <IGDirectCommentable, IGDirectContentReactable, IGDirectContentRealtimeUploadable> {

	char _reactionsNeedsReRender;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	unsigned _likeCount;
	NSArray* _reactions;
	unsigned _lastReactionType;
	IGPost* _post;

}

@property (nonatomic,retain) IGPost * post;                                     //@synthesize post=_post - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * uploadComment;                          //@synthesize uploadComment=_uploadComment - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                               //@synthesize reactions=_reactions - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                                //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) char reactionsNeedsReRender;                       //@synthesize reactionsNeedsReRender=_reactionsNeedsReRender - In the implementation block
@property (assign,nonatomic) unsigned lastReactionType;                         //@synthesize lastReactionType=_lastReactionType - In the implementation block
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(void)setPost:(IGPost *)arg1 ;
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(NSArray *)reactions;
-(id)copyOfContentWithReactionFilter:(id)arg1 ;
-(void)setReactions:(NSArray *)arg1 ;
-(char)reactionsNeedsReRender;
-(void)setReactionsNeedsReRender:(char)arg1 ;
-(unsigned)lastReactionType;
-(void)setLastReactionType:(unsigned)arg1 ;
-(id)dictionaryForRealtimeUpload;
-(char)supportsNonSimpleFormatForRealtime;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 post:(id)arg2 recipient:(id)arg3 ;
-(IGPost *)post;
-(char)isUploading;
-(unsigned)likeCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
-(void)setLikeCount:(unsigned)arg1 ;
@end

