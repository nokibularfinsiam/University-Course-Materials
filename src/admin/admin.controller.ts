import { Body, Controller, Get, Post, Param, Query, Put } from '@nestjs/common';
import { AdminService } from './admin.service';

@Controller('/admin')
export class AdminController {
  constructor(private readonly adminService: AdminService) {}

  @Get()
  getUsers(): object {
    return this.adminService.getUsers();
    //return "hello Admin";
  }

  @Get('users/:id')
  getUsersById(@Param('id') id: string): object{
    return this.adminService.getUsersById(id);
  }

  @Get('users/')
  getUsersByNameAndId(@Query('name') name: string,
  @Query('id') id: string) : object{
    return this.adminService.getUsersByNameAndId(name, id);
  }

  @Post('adduser')
  addUser(@Body() myobj: object): object{
    return this.adminService.addUser(myobj);
  }

  @Put('updateUser')
  updateUserById(@Query('name') name: string,
  @Query('id') id: string) : object{
    return this.adminService.updateUserById(name, id);
  }
}