/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBGraphObjectSelectionQueryDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBGraphObjectSelectionChangedDelegate;
@class NSObject, NSArray, FBGraphObjectTableDataSource, NSString;

@interface FBGraphObjectTableSelection : NSObject <FBGraphObjectSelectionQueryDelegate, UITableViewDelegate> {

	char _allowsMultipleSelection;
	NSObject*<FBGraphObjectSelectionChangedDelegate> _delegate;
	NSArray* _selection;
	FBGraphObjectTableDataSource* _dataSource;

}

@property (assign,nonatomic) NSObject*<FBGraphObjectSelectionChangedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * selection;                                                    //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) char allowsMultipleSelection;                                           //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)graphObjectTableDataSource:(id)arg1 selectionIncludesItem:(id)arg2 ;
-(void)deselectItems:(id)arg1 tableView:(id)arg2 ;
-(void)selectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(char)arg3 ;
-(void)deselectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(char)arg3 ;
-(char)selectionIncludesItem:(id)arg1 ;
-(void)selectItem:(id)arg1 tableView:(id)arg2 ;
-(void)clearSelectionInTableView:(id)arg1 ;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)setDelegate:(NSObject*<FBGraphObjectSelectionChangedDelegate>)arg1 ;
-(void)dealloc;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(char)allowsMultipleSelection;
-(FBGraphObjectTableDataSource *)dataSource;
-(NSObject*<FBGraphObjectSelectionChangedDelegate>)delegate;
-(NSArray *)selection;
-(void)setSelection:(NSArray *)arg1 ;
-(void)selectionChanged;
-(id)initWithDataSource:(id)arg1 ;
@end

