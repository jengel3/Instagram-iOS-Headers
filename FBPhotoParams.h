
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBDialogsParams.h>

@class NSArray;

@interface FBPhotoParams : FBDialogsParams {

	char _dataFailuresFatal;
	NSArray* _friends;
	id _place;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * friends;                     //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place;                              //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) char dataFailuresFatal;              //@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
@property (nonatomic,copy) NSArray * photos;                      //@synthesize photos=_photos - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(char)dataFailuresFatal;
-(void)setDataFailuresFatal:(char)arg1 ;
-(id)initWithPhotos:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(NSArray *)friends;
@end

