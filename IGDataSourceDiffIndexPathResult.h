/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IGDataSourceDiffIndexPathResult : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _moveFroms;
	NSArray* _moveTos;
	NSArray* _updates;

}

@property (nonatomic,readonly) NSArray * inserts;                //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSArray * deletes;                //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * moveFroms;              //@synthesize moveFroms=_moveFroms - In the implementation block
@property (nonatomic,readonly) NSArray * moveTos;                //@synthesize moveTos=_moveTos - In the implementation block
@property (nonatomic,readonly) NSArray * updates;                //@synthesize updates=_updates - In the implementation block
-(NSArray *)moveFroms;
-(NSArray *)moveTos;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 moveFroms:(id)arg3 moveTos:(id)arg4 updates:(id)arg5 ;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(char)hasChanges;
-(NSArray *)updates;
@end

