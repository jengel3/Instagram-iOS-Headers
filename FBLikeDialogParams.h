
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBDialogsParams.h>

@class NSString;

@interface FBLikeDialogParams : FBDialogsParams {

	NSString* _objectID;

}

@property (nonatomic,copy) NSString * objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(NSString *)objectID;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(void)setObjectID:(NSString *)arg1 ;
@end

